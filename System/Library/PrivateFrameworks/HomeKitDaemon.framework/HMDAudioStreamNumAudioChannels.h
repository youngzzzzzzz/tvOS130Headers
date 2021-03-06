/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/NSCopying.h>

@interface HMDAudioStreamNumAudioChannels : NSObject <NSCopying> {

	unsigned char _numAudioChannels;

}

@property (assign,nonatomic) unsigned char numAudioChannels;              //@synthesize numAudioChannels=_numAudioChannels - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setNumAudioChannels:(unsigned char)arg1 ;
-(unsigned char)numAudioChannels;
-(id)initWithNumAudioChannels:(unsigned char)arg1 ;
@end

