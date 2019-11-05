/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSString, PKDiscoveryCard, NSArray, PKDiscoveryCallToAction;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding> {

	NSString* _itemIdentifier;
	long long _version;
	long long _variant;
	PKDiscoveryCard* _card;
	NSArray* _shelves;
	PKDiscoveryCallToAction* _footerLockup;
	/*^block*/id _actionOnDismiss;

}

@property (nonatomic,retain) NSString * itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long variant;                                   //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCard * card;                              //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * shelves;                                   //@synthesize shelves=_shelves - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCallToAction * footerLockup;              //@synthesize footerLockup=_footerLockup - In the implementation block
@property (nonatomic,copy) id actionOnDismiss;                                      //@synthesize actionOnDismiss=_actionOnDismiss - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(NSString *)itemIdentifier;
-(long long)variant;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSArray *)shelves;
-(PKDiscoveryCard *)card;
-(void)setActionOnDismiss:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(void)setForItem:(id)arg1 ;
-(PKDiscoveryCallToAction *)footerLockup;
-(id)actionOnDismiss;
@end
