/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>

@class CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate {

	CNPostalAddress* _postalAddress;

}

@property (nonatomic,copy,readonly) CNPostalAddress * postalAddress;              //@synthesize postalAddress=_postalAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(CNPostalAddress *)postalAddress;
@end

