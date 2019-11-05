/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/_CNContactHandleStringEquivalenceStrategy.h>

@class NSString;

@interface _CNContactEmailAddressEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {

	NSString* _rawString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)indexKeyForString:(id)arg1 ;
-(id)initWithEmailAddress:(id)arg1 ;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
@end
