/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, NSData;

@interface CPLFaceCropChange : CPLRecordChange {

	NSString* _personIdentifier;
	NSData* _resourceData;
	long long _faceCropType;
	NSString* _rejectedPersonIdentifier;

}

@property (nonatomic,copy) NSString * personIdentifier;                      //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (nonatomic,copy) NSData * resourceData;                            //@synthesize resourceData=_resourceData - In the implementation block
@property (assign,nonatomic) long long faceCropType;                         //@synthesize faceCropType=_faceCropType - In the implementation block
@property (nonatomic,copy) NSString * rejectedPersonIdentifier;              //@synthesize rejectedPersonIdentifier=_rejectedPersonIdentifier - In the implementation block
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)propertiesDescription;
-(NSString *)personIdentifier;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(BOOL)validateFullRecord;
-(BOOL)validateChangeWithError:(id*)arg1 ;
-(id)personScopedIdentifier;
-(void)setPersonScopedIdentifier:(id)arg1 ;
-(NSData *)resourceData;
-(void)setResourceData:(NSData *)arg1 ;
-(long long)faceCropType;
-(void)setFaceCropType:(long long)arg1 ;
-(NSString *)rejectedPersonIdentifier;
-(void)setRejectedPersonIdentifier:(NSString *)arg1 ;
@end

