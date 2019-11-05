/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHObject.h>
#import <Photos/PXPerson.h>

@class NSString, NSDictionary, NSDate;

@interface PHPerson : PHObject <PXPerson> {

	BOOL _inPersonNamingModel;
	unsigned short _ageType;
	unsigned short _genderType;
	NSString* _name;
	NSString* _displayName;
	long long _type;
	unsigned long long _manualOrder;
	NSString* _personUri;
	long long _faceCount;
	NSDictionary* _contactMatchingDictionary;
	long long _verifiedType;
	long long _questionType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long numberOfAssets; 
@property (readonly) NSString * name; 
@property (readonly) NSString * px_displayName; 
@property (readonly) NSString * px_localizedName; 
@property (readonly) NSString * px_localIdentifier; 
@property (readonly) BOOL isVerified; 
@property (readonly) BOOL isPersonModel; 
@property (readonly) NSDate * px_keyPhotoDate; 
@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long manualOrder;                                     //@synthesize manualOrder=_manualOrder - In the implementation block
@property (nonatomic,readonly) NSString * personUri;                                               //@synthesize personUri=_personUri - In the implementation block
@property (getter=isInPersonNamingModel,nonatomic,readonly) BOOL inPersonNamingModel;              //@synthesize inPersonNamingModel=_inPersonNamingModel - In the implementation block
@property (nonatomic,readonly) long long faceCount;                                                //@synthesize faceCount=_faceCount - In the implementation block
@property (getter=isVerified,nonatomic,readonly) BOOL verified; 
@property (nonatomic,readonly) long long verifiedType;                                             //@synthesize verifiedType=_verifiedType - In the implementation block
@property (nonatomic,readonly) long long questionType;                                             //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,readonly) unsigned short ageType;                                             //@synthesize ageType=_ageType - In the implementation block
@property (nonatomic,readonly) unsigned short genderType;                                          //@synthesize genderType=_genderType - In the implementation block
@property (nonatomic,readonly) NSDictionary * contactMatchingDictionary;                           //@synthesize contactMatchingDictionary=_contactMatchingDictionary - In the implementation block
+(void)px_loadRepresentativeFacesForPersons:(id)arg1 ;
+(id)px_localizedNameFromContact:(id)arg1 ;
+(id)px_fetchPersonsForSuggestion:(id)arg1 options:(id)arg2 ;
+(id)fullNameFromContact:(id)arg1 ;
+(id)displayNameFromContact:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsKeyFaces;
+(id)localIdentifierExpressionForFetchRequests;
+(id)fetchPersonsWithOptions:(id)arg1 ;
+(id)fetchPersonsWithType:(long long)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithQuestionType:(long long)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsInAsset:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchRejectedPersonsForFace:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg1 options:(id)arg2 ;
+(id)fetchMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFinalMergeTargetPersonsForPersonWithUUID:(id)arg1 options:(id)arg2 ;
+(id)_assetLocalIdentifiersForAssetCollection:(id)arg1 ;
+(id)_momentLocalIdentifiersForAssetCollection:(id)arg1 ;
+(id)fetchSuggestedPersonsForAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedPersonsForFocusedAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedRecipientsForAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)batchFetchSuggestedRecipientsForAssets:(id)arg1 options:(id)arg2 ;
+(id)_fetchSuggestedPersonsForRecipients:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3 ;
+(id)_fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 assetCollection:(id)arg2 options:(id)arg3 client:(unsigned long long)arg4 ;
+(id)fetchHomePersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)personToKeepForCloudConistencyFromPersons:(id)arg1 ;
+(id)fetchPersonsForContacts:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsForContactIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)inferredContactByPersonLocalIdentifierForPersons:(id)arg1 ;
+(id)fetchPersonsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
+(long long)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)_verifiedPersonWithLocalIdentifier:(id)arg1 fromPhotoLibrary:(id)arg2 ;
+(id)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 ;
+(long long)suggestVerifiedPersonForFace:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)suggestVerifiedPersonForPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
+(long long)updateKeyFacesOfPersons:(id)arg1 forceUpdate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(long long)_personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 fromClient:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)_personSuggestionMarkedAsConfirmed:(BOOL)arg1 fromPersonSuggestion:(id)arg2 ;
+(id)_packageSuggestionList:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_convertToPersonSuggestion:(id)arg1 photoLibrary:(id)arg2 ;
-(unsigned long long)numberOfAssets;
-(NSDate *)px_keyPhotoDate;
-(void)requestFaceTileImageWithTargetSize:(CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(BOOL)arg4 boundFaceRect:(BOOL)arg5 completionBlock:(/*^block*/id)arg6 ;
-(NSString *)px_displayName;
-(NSString *)px_localizedName;
-(NSString *)px_localIdentifier;
-(BOOL)isPersonModel;
-(NSString *)name;
-(NSString *)description;
-(long long)type;
-(NSString *)displayName;
-(long long)faceCount;
-(BOOL)isVerified;
-(long long)questionType;
-(NSDictionary *)contactMatchingDictionary;
-(long long)verifiedType;
-(NSString *)personUri;
-(unsigned long long)manualOrder;
-(unsigned short)genderType;
-(unsigned short)ageType;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(BOOL)isInPersonNamingModel;
-(void)markAsNeedingKeyFace;
-(id)linkedContactWithKeysToFetch:(id)arg1 ;
-(id)inferredContact;
-(id)suggestedContacts;
-(id)objectReference;
@end
