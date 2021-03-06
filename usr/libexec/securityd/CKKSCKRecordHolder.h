/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <securityd/securityd-Structs.h>
#import <securityd/CKKSSQLDatabaseObject.h>

@class CKRecordZoneID, NSString, NSData, CKRecord;

@interface CKKSCKRecordHolder : CKKSSQLDatabaseObject {

	CKRecordZoneID* _zoneID;
	NSString* _ckRecordType;
	NSData* _encodedCKRecord;

}

@property (retain) CKRecordZoneID * zoneID;                                                                //@synthesize zoneID=_zoneID - In the implementation block
@property (retain) NSString * ckRecordType;                                                                //@synthesize ckRecordType=_ckRecordType - In the implementation block
@property (copy) NSData * encodedCKRecord;                                                                 //@synthesize encodedCKRecord=_encodedCKRecord - In the implementation block
@property (setter=setStoredCKRecord:,getter=storedCKRecord,retain) CKRecord * storedCKRecord; 
-(id)initWithCKRecord:(id)arg1 ;
-(id)CKRecordName;
-(NSString *)ckRecordType;
-(id)updateCKRecord:(id)arg1 zoneID:(id)arg2 ;
-(void)setFromCKRecord:(id)arg1 ;
-(BOOL)matchesCKRecord:(id)arg1 ;
-(void)setStoredCKRecord:(CKRecord *)arg1 ;
-(NSData *)encodedCKRecord;
-(void)setEncodedCKRecord:(NSData *)arg1 ;
-(CKRecord *)storedCKRecord;
-(id)initWithCKRecordType:(id)arg1 encodedCKRecord:(id)arg2 zoneID:(id)arg3 ;
-(id)CKRecordWithZoneID:(id)arg1 ;
-(void)setCkRecordType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

