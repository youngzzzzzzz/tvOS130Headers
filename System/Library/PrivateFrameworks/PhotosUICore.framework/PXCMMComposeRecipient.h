/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/NSCopying.h>
#import <PhotosUICore/PXTapToRadar.h>

@protocol PXCMMPersonSuggestion;
@class PXRecipient, NSString, CNContact, NSDictionary;

@interface PXCMMComposeRecipient : NSObject <NSCopying, PXTapToRadar> {

	PXRecipient* _recipient;
	id<PXCMMPersonSuggestion> _personSuggestion;

}

@property (nonatomic,readonly) PXRecipient * recipient;                                 //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) id<PXCMMPersonSuggestion> personSuggestion;              //@synthesize personSuggestion=_personSuggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) NSDictionary * diagnosticDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)localizedName;
-(CNContact *)contact;
-(PXRecipient *)recipient;
-(id)initWithRecipient:(id)arg1 ;
-(NSDictionary *)diagnosticDictionary;
-(id)initWithPersonSuggestion:(id)arg1 ;
-(id<PXCMMPersonSuggestion>)personSuggestion;
@end

