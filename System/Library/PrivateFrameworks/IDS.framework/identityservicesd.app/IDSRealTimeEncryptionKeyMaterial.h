/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData, NSDate, NSMutableSet, NSString;

@interface IDSRealTimeEncryptionKeyMaterial : NSObject {

	NSUUID* _MKI;
	NSData* _MKS;
	NSData* _MKM;
	NSDate* _createdAt;
	BOOL _isSentToClient;
	BOOL _isGeneratedLocally;
	NSMutableSet* _devicesToBeSent;
	NSString* _groupID;

}

@property (nonatomic,readonly) NSUUID * MKI;                       //@synthesize MKI=_MKI - In the implementation block
@property (nonatomic,readonly) NSData * MKS;                       //@synthesize MKS=_MKS - In the implementation block
@property (nonatomic,readonly) NSData * MKM;                       //@synthesize MKM=_MKM - In the implementation block
@property (nonatomic,readonly) NSDate * createdAt;                 //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) BOOL isSentToClient;                  //@synthesize isSentToClient=_isSentToClient - In the implementation block
@property (assign,nonatomic) BOOL isGeneratedLocally;              //@synthesize isGeneratedLocally=_isGeneratedLocally - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                 //@synthesize groupID=_groupID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(NSString *)groupID;
-(NSDate *)createdAt;
-(NSUUID *)MKI;
-(BOOL)isGeneratedLocally;
-(NSData *)MKM;
-(NSData *)MKS;
-(id)initWithMKM:(id)arg1 MKS:(id)arg2 MKI:(id)arg3 groupID:(id)arg4 ;
-(id)initWithIndex:(id)arg1 groupID:(id)arg2 ;
-(BOOL)isSentToClient;
-(void)setIsSentToClient:(BOOL)arg1 ;
-(void)sentToDevice:(id)arg1 ;
-(BOOL)isEqualToRealTimeEncryptionKeyMaterial:(id)arg1 ;
-(void)_changeCreatedAt:(id)arg1 ;
-(void)removeDeviceFromSentToDevice:(id)arg1 ;
-(void)setIsGeneratedLocally:(BOOL)arg1 ;
@end

