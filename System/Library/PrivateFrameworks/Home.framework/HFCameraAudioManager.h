/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMCameraProfile, HMCameraStream, HFCharacteristicValueManager;

@interface HFCameraAudioManager : NSObject {

	HMCameraProfile* _cameraProfile;
	HMCameraStream* _cameraStream;
	HFCharacteristicValueManager* _valueManager;

}

@property (nonatomic,retain) HMCameraProfile * cameraProfile;                                        //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) HMCameraStream * cameraStream;                                          //@synthesize cameraStream=_cameraStream - In the implementation block
@property (nonatomic,retain) HFCharacteristicValueManager * valueManager;                            //@synthesize valueManager=_valueManager - In the implementation block
@property (nonatomic,readonly) unsigned long long audioStreamSetting; 
@property (getter=isOutgoingAudioEnabled,nonatomic,readonly) BOOL outgoingAudioEnabled; 
@property (getter=isIncomingAudioEnabled,nonatomic,readonly) BOOL incomingAudioEnabled; 
-(HMCameraStream *)cameraStream;
-(unsigned long long)audioStreamSetting;
-(HMCameraProfile *)cameraProfile;
-(void)setCameraStream:(HMCameraStream *)arg1 ;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(void)setValueManager:(HFCharacteristicValueManager *)arg1 ;
-(id)updateAudioStreamSetting:(unsigned long long)arg1 ;
-(id)enableRemoteSpeakerIfNecessary;
-(id)enableRemoteMicrophoneIfNecessary;
-(id)_enableAudioIfNecessaryForAudioControl:(id)arg1 minVolume:(float)arg2 ;
-(id)_readValuesForCharacteristics:(id)arg1 ;
-(id)_writeValuesForCharacteristics:(id)arg1 ;
-(HFCharacteristicValueManager *)valueManager;
-(id)initWithCameraProfile:(id)arg1 cameraStream:(id)arg2 valueManager:(id)arg3 ;
-(BOOL)isOutgoingAudioEnabled;
-(BOOL)isIncomingAudioEnabled;
-(id)setOutgoingAudioEnabled:(BOOL)arg1 ;
-(id)setIncomingAudioEnabled:(BOOL)arg1 ;
@end
