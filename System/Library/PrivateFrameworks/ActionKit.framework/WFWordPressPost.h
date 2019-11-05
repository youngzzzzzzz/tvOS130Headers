/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <ActionKit/MTLJSONSerializing.h>

@class NSNumber, NSURL, NSString, NSDictionary;

@interface WFWordPressPost : MTLModel <MTLJSONSerializing> {

	NSNumber* _postId;
	NSURL* _link;

}

@property (nonatomic,copy,readonly) NSNumber * postId;                           //@synthesize postId=_postId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * link;                                //@synthesize link=_link - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)postIdJSONTransformer;
+(id)linkJSONTransformer;
-(NSURL *)link;
-(NSNumber *)postId;
@end
