/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <VideosUI/NSCopying.h>

@class NSSet;

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSSet* _addedCanonicalIDs;
	NSSet* _removedCanonicalIDs;

}

@property (nonatomic,copy) NSSet * addedCanonicalIDs;                //@synthesize addedCanonicalIDs=_addedCanonicalIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedCanonicalIDs;              //@synthesize removedCanonicalIDs=_removedCanonicalIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDescriptor:(id)arg1 ;
-(NSSet *)removedCanonicalIDs;
-(void)setRemovedCanonicalIDs:(NSSet *)arg1 ;
-(id)coalescedEvent:(id)arg1 ;
-(id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 ;
-(id)initWithAddedCanonicalIDs:(id)arg1 removedCanonicalIDs:(id)arg2 ;
-(NSSet *)addedCanonicalIDs;
-(void)setAddedCanonicalIDs:(NSSet *)arg1 ;
@end

