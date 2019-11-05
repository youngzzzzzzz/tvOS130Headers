/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSString, NSDictionary, NSData;

@interface FigCaptureSourceStreamsContainer : NSObject {

	int _deviceType;
	OpaqueFigCaptureDeviceRef _device;
	NSArray* _streams;
	OpaqueFigCaptureStreamRef _primaryStream;
	NSString* _primaryStreamPortType;
	NSDictionary* _streamsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;
	NSData* _poseMatrixData;

}

@property (nonatomic,readonly) int deviceType;                                                                //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) OpaqueFigCaptureStreamRef primaryStream;                                       //@synthesize primaryStream=_primaryStream - In the implementation block
@property (nonatomic,readonly) NSString * primaryStreamPortType;                                              //@synthesize primaryStreamPortType=_primaryStreamPortType - In the implementation block
@property (nonatomic,readonly) NSDictionary * streamsByPortType;                                              //@synthesize streamsByPortType=_streamsByPortType - In the implementation block
@property (nonatomic,readonly) NSArray * portTypesSupportingDepth; 
@property (nonatomic,readonly) float minZoomFactorForDepth; 
@property (nonatomic,readonly) OpaqueFigCaptureStreamRef streamProvidingSDOFRenderingParameters; 
@property (nonatomic,readonly) NSArray * switchOverZoomFactors; 
@property (nonatomic,readonly) NSData * poseMatrixData;                                                       //@synthesize poseMatrixData=_poseMatrixData - In the implementation block
-(void)dealloc;
-(int)deviceType;
-(int)_populateStreamsFromDeviceVendorForPosition:(int)arg1 baseZoomFactorOverrides:(id)arg2 ;
-(NSArray *)portTypesSupportingDepth;
-(id)initWithDeviceType:(int)arg1 position:(int)arg2 device:(OpaqueFigCaptureDeviceRef)arg3 baseZoomFactorOverrides:(id)arg4 ;
-(float)minZoomFactorForDepth;
-(OpaqueFigCaptureStreamRef)streamProvidingSDOFRenderingParameters;
-(NSArray *)switchOverZoomFactors;
-(OpaqueFigCaptureStreamRef)primaryStream;
-(NSString *)primaryStreamPortType;
-(NSDictionary *)streamsByPortType;
-(NSData *)poseMatrixData;
@end
