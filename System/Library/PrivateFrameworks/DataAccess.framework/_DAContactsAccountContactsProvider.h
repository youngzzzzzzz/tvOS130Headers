/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAContactsAccountProvider.h>

@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)allAccounts;
-(id)fetchedAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg1 ;
-(id)accountForContainerWithIdentifier:(id)arg1 ;
@end

