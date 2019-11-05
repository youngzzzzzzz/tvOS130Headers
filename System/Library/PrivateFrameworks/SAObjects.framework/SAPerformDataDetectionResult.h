/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAPerformDataDetectionResult : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * detectionTarget; 
@property (nonatomic,copy) NSArray * matches; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)performDataDetectionResult;
+(id)performDataDetectionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)detectionTarget;
-(void)setDetectionTarget:(NSString *)arg1 ;
@end
