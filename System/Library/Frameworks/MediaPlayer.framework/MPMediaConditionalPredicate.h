/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaPredicate.h>
#import <MediaPlayer/MPPProtobufferCoding.h>

@class MPMediaPredicate, NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {

	MPMediaPredicate* _conditionPredicate;
	MPMediaPredicate* _thenPredicate;
	MPMediaPredicate* _elsePredicate;

}

@property (nonatomic,copy,readonly) MPMediaPredicate * conditionPredicate;              //@synthesize conditionPredicate=_conditionPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * thenPredicate;                   //@synthesize thenPredicate=_thenPredicate - In the implementation block
@property (nonatomic,copy,readonly) MPMediaPredicate * elsePredicate;                   //@synthesize elsePredicate=_elsePredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPMediaPredicate *)conditionPredicate;
-(id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3 ;
-(MPMediaPredicate *)thenPredicate;
-(MPMediaPredicate *)elsePredicate;
-(id)initWithProtobufferDecodableObject:(id)arg1 ;
-(id)protobufferEncodableObject;
-(id)ML3PredicateForTrack;
-(id)ML3PredicateForContainer;
-(id)_ML3PredicateForEntityTypeSelector:(SEL)arg1 ;
@end

