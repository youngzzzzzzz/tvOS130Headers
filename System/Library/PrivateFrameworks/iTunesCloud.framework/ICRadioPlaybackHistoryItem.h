/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/NSCopying.h>
#import <iTunesCloud/NSMutableCopying.h>
#import <iTunesCloud/NSSecureCoding.h>

@class NSDate, NSNumber, NSDictionary, NSMutableDictionary;

@interface ICRadioPlaybackHistoryItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	NSNumber* _pauseTime;
	NSDictionary* _serverTrackInfo;
	NSDate* _skipDate;
	long long _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSDate * expirationDate;                                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSNumber * pauseTime;                                          //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverTrackInfo; 
@property (nonatomic,copy,readonly) NSDate * skipDate;                                             //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeIdentifier;                                          //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * propertyListRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(long long)storeIdentifier;
-(id)initWithTrack:(id)arg1 ;
-(NSMutableDictionary *)propertyListRepresentation;
-(NSDictionary *)serverTrackInfo;
-(NSNumber *)pauseTime;
-(NSDate *)skipDate;
@end
