/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICDRequest.h>

@interface ICBulkArtworkInfoRequest : ICDRequest
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 cloudIDs:(id)arg2 itemKind:(unsigned char)arg3 useLongIDs:(BOOL)arg4 ;
-(id)_bodyDataForCloudIDs:(id)arg1 itemKind:(unsigned char)arg2 useLongIDs:(BOOL)arg3 ;
-(id)_queryFilterString;
@end
