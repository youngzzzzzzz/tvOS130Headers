/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRandom.h>
#import <MediaPlayer/NSSecureCoding.h>
#import <MediaPlayer/NSCopying.h>

@class NSData;

@interface MPARC4RandomSource : NSObject <MPRandom, NSSecureCoding, NSCopying> {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed;              //@synthesize seed=_seed - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)seed;
-(void)setSeed:(NSData *)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithSeed:(id)arg1 ;
@end
