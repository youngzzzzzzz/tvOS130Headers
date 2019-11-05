/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem {

	PKPaymentContentItem* _contentItem;

}

@property (nonatomic,readonly) PKPaymentContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
+(long long)dataType;
+(BOOL)supportsMultipleItems;
-(PKPaymentContentItem *)contentItem;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)initWithContentItem:(id)arg1 ;
@end
