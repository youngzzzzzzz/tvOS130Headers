/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSString;

@interface SAReminderPhonePayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSString * phoneCallType; 
@property (nonatomic,copy) NSString * recipient; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)phonePayload;
+(id)phonePayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRecipient:(NSString *)arg1 ;
-(NSString *)recipient;
-(id)encodedClassName;
-(NSString *)phoneCallType;
-(void)setPhoneCallType:(NSString *)arg1 ;
@end
