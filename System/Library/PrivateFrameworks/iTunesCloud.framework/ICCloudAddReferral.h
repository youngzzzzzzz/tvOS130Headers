/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/NSSecureCoding.h>

@class NSString;

@interface ICCloudAddReferral : NSObject <NSSecureCoding> {

	NSString* _playlistGlobalID;
	long long _albumAdamID;

}

@property (nonatomic,copy,readonly) NSString * playlistGlobalID;              //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long albumAdamID;                         //@synthesize albumAdamID=_albumAdamID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referralWithPlaylistGlobalID:(id)arg1 ;
+(id)referralWithAlbumAdamID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)playlistGlobalID;
-(long long)albumAdamID;
@end

