/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/NSCopying.h>
#import <AVFoundation/NSMutableCopying.h>

@class AVAssetDownloadStorageManagementPolicyInternal, NSString, NSDate;

@interface AVAssetDownloadStorageManagementPolicy : NSObject <NSCopying, NSMutableCopying> {

	AVAssetDownloadStorageManagementPolicyInternal* _storageManagementPolicy;

}

@property (nonatomic,copy,readonly) NSString * priority; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)_setPolicyDictionary:(id)arg1 ;
-(id)_policyDictionary;
@end
