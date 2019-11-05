/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABSAddressBook;

@interface ABSAssistantManager : NSObject {

	ABSAddressBook* _addressBook;

}

@property (nonatomic,readonly) ABSAddressBook * addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(id)init;
-(id)initWithAddressBook:(id)arg1 ;
-(ABSAddressBook *)addressBook;
-(id)newSAPersonFromABPerson:(void*)arg1 ;
@end
