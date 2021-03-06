/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLAlbumContainer.h>
#import <PhotoLibraryServices/PLIndexMappingCache.h>

@class NSMutableOrderedSet, NSString;

@interface PLSortedAlbumList : NSObject <PLAlbumContainer, PLIndexMappingCache> {

	NSObject* _backingAlbumList;
	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
	/*^block*/id _sortComparator;
	NSMutableOrderedSet* _weak_albums;

}

@property (nonatomic,retain) NSObject*<PLAlbumContainer> backingAlbumList;                    //@synthesize backingAlbumList=_backingAlbumList - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * _albums; 
@property (nonatomic,copy) id sortComparator;                                                 //@synthesize sortComparator=_sortComparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long containersCount; 
@property (nonatomic,readonly) unsigned long long albumsCount; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,copy,readonly) id albumsSortingComparator; 
@property (nonatomic,readonly) int filter; 
@property (nonatomic,readonly) unsigned long long unreadAlbumsCount; 
@property (nonatomic,retain,readonly) NSString * _prettyDescription; 
@property (nonatomic,retain,readonly) NSString * _typeDescription; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
-(void)dealloc;
-(BOOL)isEmpty;
-(id)identifier;
-(id)managedObjectContext;
-(int)filter;
-(NSString *)_typeDescription;
-(id)albums;
-(id)photoLibrary;
-(BOOL)isFolder;
-(NSString *)_prettyDescription;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(id)containers;
-(BOOL)canEditContainers;
-(id)containersRelationshipName;
-(unsigned long long)containersCount;
-(BOOL)hasAtLeastOneAlbum;
-(short)albumListType;
-(BOOL)canEditAlbums;
-(BOOL)albumHasFixedOrder:(NSObject*)arg1 ;
-(void)setNeedsReordering;
-(BOOL)needsReordering;
-(void)updateAlbumsOrderIfNeeded;
-(void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2 ;
-(void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3 ;
-(unsigned long long)albumsCount;
-(id)albumsSortingComparator;
-(unsigned long long)unreadAlbumsCount;
-(NSObject*<PLAlbumContainer>)backingAlbumList;
-(NSMutableOrderedSet *)_albums;
-(void)set_albums:(NSMutableOrderedSet *)arg1 ;
-(void)setBackingAlbumList:(NSObject*<PLAlbumContainer>)arg1 ;
-(id)initWithAlbumList:(NSObject*)arg1 sortComparator:(/*^block*/id)arg2 ;
-(void)createSortedIndexesMap;
-(unsigned long long)countOfSortedAlbums;
-(unsigned long long)indexInSortedAlbumsOfObject:(id)arg1 ;
-(id)objectInSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inSortedAlbumsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromSortedAlbumsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInSortedAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)sortComparator;
-(void)setSortComparator:(id)arg1 ;
@end

