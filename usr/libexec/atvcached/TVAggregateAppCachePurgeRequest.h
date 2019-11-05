/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/atvcached
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <atvcached/atvcached-Structs.h>
#import <atvcached/NSSecureCoding.h>
#import <atvcached/NSCopying.h>
#import <atvcached/TVCacheDeletePurging.h>

@class NSURL, NSMutableDictionary, NSArray, NSString;

@interface TVAggregateAppCachePurgeRequest : NSObject <NSSecureCoding, NSCopying, TVCacheDeletePurging> {

	NSURL* _cacheURL;
	NSMutableDictionary* _mutableRequests;

}

@property (nonatomic,retain) NSURL * cacheURL;                                               //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableRequests;                          //@synthesize mutableRequests=_mutableRequests - In the implementation block
@property (nonatomic,readonly) long long urgency; 
@property (nonatomic,copy,readonly) NSArray * applications; 
@property (nonatomic,copy,readonly) NSArray * applicationsRequiringTermination; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)urgency;
-(NSURL *)cacheURL;
-(NSArray *)applications;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)initWithCacheURL:(id)arg1 ;
-(void)setCacheURL:(NSURL *)arg1 ;
-(long long)purgeableAmountWithUrgency:(long long)arg1 ;
-(long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2 ;
-(void)setPurgeRequest:(id)arg1 forApplication:(id)arg2 ;
-(NSMutableDictionary *)mutableRequests;
-(void)setMutableRequests:(NSMutableDictionary *)arg1 ;
-(NSArray *)applicationsRequiringTermination;
-(BOOL)performBlockInTerminationAssertionForRequiredApplications:(/*^block*/id)arg1 ;
@end
