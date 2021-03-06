/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNContainerUpdate.h>

@protocol CNContainerUpdate <NSObject>
@required
-(id)value;
-(id)property;
-(void)applyToMutableContainer:(id)arg1;

@end


@class CNContainerPropertyDescription, NSString;

@interface CNContainerUpdate : NSObject <CNContainerUpdate> {

	CNContainerPropertyDescription* _property;
	id _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updateWithValue:(id)arg1 property:(id)arg2 ;
-(id)value;
-(id)property;
-(id)initWithProperty:(id)arg1 value:(id)arg2 ;
-(void)applyToMutableContainer:(id)arg1 ;
@end

