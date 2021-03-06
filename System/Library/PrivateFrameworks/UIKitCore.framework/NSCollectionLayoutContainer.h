/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutContainer.h>

@protocol NSCollectionLayoutContainer <NSObject>
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveContentInsets; 
@required
-(CGSize)contentSize;
-(NSDirectionalEdgeInsets)contentInsets;
-(CGSize)effectiveContentSize;
-(NSDirectionalEdgeInsets)effectiveContentInsets;

@end


@class NSString;

@interface NSCollectionLayoutContainer : NSObject <NSCollectionLayoutContainer> {

	CGSize _contentSize;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (assign,nonatomic) CGSize contentSize;                                            //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets effectiveContentInsets; 
-(NSString *)description;
-(CGSize)contentSize;
-(NSDirectionalEdgeInsets)contentInsets;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(CGSize)effectiveContentSize;
-(id)initWithContentSize:(CGSize)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 ;
-(NSDirectionalEdgeInsets)effectiveContentInsets;
@end

