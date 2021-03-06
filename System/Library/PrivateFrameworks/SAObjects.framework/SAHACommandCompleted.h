/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * actionResults; 
@property (nonatomic,copy) NSString * clientValidity; 
@property (nonatomic,copy) NSString * commandOutcome; 
@property (nonatomic,copy) NSURL * homeIdentifier; 
@property (nonatomic,copy) NSString * serverValidity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)commandCompleted;
+(id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)shortDescription;
-(id)contentDescription;
-(id)headerDescription;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)actionResults;
-(void)setActionResults:(NSArray *)arg1 ;
-(NSString *)clientValidity;
-(void)setClientValidity:(NSString *)arg1 ;
-(NSString *)commandOutcome;
-(void)setCommandOutcome:(NSString *)arg1 ;
-(NSURL *)homeIdentifier;
-(void)setHomeIdentifier:(NSURL *)arg1 ;
-(NSString *)serverValidity;
-(void)setServerValidity:(NSString *)arg1 ;
@end

