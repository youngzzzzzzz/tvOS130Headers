/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxHostCapabilities : NSObject {

	FxHostCapabilitiesPriv* _hostCapPriv;

}
+(void)setRemoteHostCapabilities:(id)arg1 ;
+(id)getRemoteHostCapabilities;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)upscalesFields;
-(BOOL)hostIsMotion;
-(BOOL)hostIsFCE;
-(BOOL)hostIsFCP;
-(unsigned)hostVersionNumber;
-(id)hostID;
-(BOOL)formatsFloatRGBABitmapsAsARGB;
-(BOOL)supportsHiddenParameters;
-(BOOL)supportsDisabledParameters;
-(BOOL)supportsGroupParameters;
-(BOOL)notifiesParameterChangedForGenerators;
-(BOOL)parameterChangedUsableForAllParameters;
-(BOOL)supportsTemporalBitmaps;
-(unsigned long long)timeBase;
-(id)glContextPixelFormatAttributes;
@end
