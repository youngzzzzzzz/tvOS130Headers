/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <ContactsFoundation/CNCoreDelegateInfo.h>

@class NSNumber, NSString, NSPersonNameComponents;

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * altDSID; 
@property (nonatomic,copy) NSString * principalPath; 
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (assign,nonatomic) BOOL isMe; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(NSString *)appleID;
-(NSString *)principalPath;
-(NSPersonNameComponents *)nameComponents;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
@end
