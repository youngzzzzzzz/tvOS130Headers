/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/JaliscoImporter.h>

@class ICDJaliscoMediaFilter;

@interface JaliscoMediaImporter : JaliscoImporter {

	ICDJaliscoMediaFilter* _mediaFilter;

}
+(id)logCategory;
+(id)oversizeLogCategory;
-(void)cancel;
-(id)metadataKeys;
-(id)queryFilter;
-(id)purchaseTokens;
-(unsigned)onDiskRevision;
-(id)updateLibraryFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withResponse:(id)arg3 ;
-(BOOL)needsUpdateForTokens;
-(void)clearNeedsUpdateForTokens;
-(id)mediaFilter;
-(id)_supportedMediaKindsDatabasePropertyValue;
-(id)_importTracksFromRevision:(unsigned)arg1 toRevision:(unsigned)arg2 withItemsResponse:(id)arg3 ;
-(id)_chapterDataFromURL:(id)arg1 ;
-(id)_chapterArtworkURLsForData:(id)arg1 baseURL:(id)arg2 ;
@end

