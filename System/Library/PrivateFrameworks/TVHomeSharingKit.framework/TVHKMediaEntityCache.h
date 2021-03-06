/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/NSCopying.h>

@interface TVHKMediaEntityCache : NSObject <NSCopying> {

	unsigned long long _revision;

}

@property (assign,nonatomic) unsigned long long revision;              //@synthesize revision=_revision - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)clear;
-(void)setRevision:(unsigned long long)arg1 ;
-(unsigned long long)revision;
-(void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2 ;
@end

