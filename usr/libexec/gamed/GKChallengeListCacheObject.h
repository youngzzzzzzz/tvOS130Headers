/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKListCacheObject.h>

@class GKPlayerProfileCacheObject;

@interface GKChallengeListCacheObject : GKListCacheObject

@property (nonatomic,retain) GKPlayerProfileCacheObject * player; 
+(id)entityName;
+(Class)entryClass;
-(void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2 ;
@end

