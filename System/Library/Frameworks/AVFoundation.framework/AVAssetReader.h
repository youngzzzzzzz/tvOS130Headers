/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderInternal, AVAsset, NSError, NSArray;

@interface AVAssetReader : NSObject {

	AVAssetReaderInternal* _priv;

}

@property (getter=_figAssetReader,nonatomic,readonly) OpaqueFigAssetReaderRef figAssetReader; 
@property (assign,setter=_setReadSingleSample:,getter=_readSingleSample,nonatomic) BOOL readSingleSample; 
@property (nonatomic,retain,readonly) AVAsset * asset; 
@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_AV8 timeRange; 
@property (nonatomic,readonly) NSArray * outputs; 
+(void)initialize;
+(id)assetReaderWithAsset:(id)arg1 error:(id*)arg2 ;
+(id)_errorForOSStatus:(int)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(long long)status;
-(void)_failWithError:(id)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(void)addOutput:(id)arg1 ;
-(NSArray *)outputs;
-(AVAsset *)asset;
-(void)_setReadSingleSample:(BOOL)arg1 ;
-(BOOL)startReading;
-(void)cancelReading;
-(id)initWithAsset:(id)arg1 error:(id*)arg2 ;
-(void)_tearDownFigAssetReader;
-(void)_transitionToStatus:(long long)arg1 failureError:(id)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_outputDidFinish:(id)arg1 ;
-(BOOL)_readSingleSample;
-(BOOL)canAddOutput:(id)arg1 ;
-(void)_handleServerDiedNotification;
-(OpaqueFigAssetReaderRef)_figAssetReader;
@end

