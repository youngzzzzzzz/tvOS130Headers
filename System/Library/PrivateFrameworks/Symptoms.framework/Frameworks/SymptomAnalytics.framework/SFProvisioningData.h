/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSNumber, NSDate;

@interface SFProvisioningData : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) NSData * map; 
@property (nonatomic,copy) NSNumber * tag; 
@property (nonatomic,copy) NSDate * timeStamp; 
+(id)entityName;
+(id)fetchRequest;
@end
