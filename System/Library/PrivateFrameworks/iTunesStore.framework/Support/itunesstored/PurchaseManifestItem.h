/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSNumber, NSString;

@interface PurchaseManifestItem : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * manifestItemDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy) NSNumber * libraryPersistentIdentifier; 
@property (nonatomic,copy) NSString * relativeArtworkPath; 
@property (nonatomic,copy) NSString * relativeFeedAssetPath; 
@property (nonatomic,copy) NSString * relativeMediaAssetPath; 
@property (nonatomic,copy) NSString * relativeMetadataPath; 
-(id)init;
-(void)dealloc;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)manifestItemDictionary;
-(id)initWithManifestItemDictionary:(id)arg1 ;
-(NSString *)relativeMetadataPath;
-(void)setRelativeMetadataPath:(NSString *)arg1 ;
-(void)setRelativeArtworkPath:(NSString *)arg1 ;
-(void)setRelativeMediaAssetPath:(NSString *)arg1 ;
-(void)setRelativeFeedAssetPath:(NSString *)arg1 ;
-(NSString *)relativeArtworkPath;
-(NSString *)relativeMediaAssetPath;
-(NSString *)relativeFeedAssetPath;
-(NSNumber *)libraryPersistentIdentifier;
-(void)setLibraryPersistentIdentifier:(NSNumber *)arg1 ;
@end
