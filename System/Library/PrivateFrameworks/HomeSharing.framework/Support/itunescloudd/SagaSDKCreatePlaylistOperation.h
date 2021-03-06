/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/SagaCreatePlaylistOperation.h>

@class NSString;

@interface SagaSDKCreatePlaylistOperation : SagaCreatePlaylistOperation {

	NSString* _requestingBundleID;

}
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)requestWithDatabaseID:(unsigned)arg1 databaseRevision:(unsigned)arg2 playlistProperties:(id)arg3 trackList:(id)arg4 ;
-(id)initWithPlaylistPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4 requestingBundleID:(id)arg5 ;
@end

