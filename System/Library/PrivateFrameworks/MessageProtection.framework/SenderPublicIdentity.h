/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSData, RegisteredPreKey;

@interface SenderPublicIdentity : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,retain) NSData * skippedCounters; 
@property (assign,nonatomic) int upperBufferIndex; 
@property (nonatomic,retain) RegisteredPreKey * messagedKey; 
+(id)fetchRequest;
@end

