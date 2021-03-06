/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFProductAvailability.h>
@class NSArray, NSDictionary, NSData;


@protocol SFProductAvailability <NSObject>
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSArray *)results;
-(NSDictionary *)dictionaryRepresentation;
-(void)setResults:(id)arg1;
-(NSData *)jsonData;

@end

#import <SearchFoundation/NSSecureCoding.h>
#import <SearchFoundation/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFProductAvailability : NSObject <SFProductAvailability, NSSecureCoding, NSCopying> {

	NSArray* _results;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * results;                                        //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)results;
-(NSDictionary *)dictionaryRepresentation;
-(void)setResults:(NSArray *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

