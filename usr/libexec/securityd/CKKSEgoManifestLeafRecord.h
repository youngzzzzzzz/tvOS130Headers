/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/CKKSManifestLeafRecord.h>

@class NSMutableDictionary;

@interface CKKSEgoManifestLeafRecord : CKKSManifestLeafRecord

@property (nonatomic,readonly) NSMutableDictionary * recordDigestDict; 
+(id)newLeafRecordInZone:(id)arg1 ;
-(void)addOrUpdateRecordUUID:(id)arg1 withEncryptedItemData:(id)arg2 ;
-(void)addOrUpdateRecord:(id)arg1 ;
-(void)deleteItemWithUUID:(id)arg1 ;
@end

