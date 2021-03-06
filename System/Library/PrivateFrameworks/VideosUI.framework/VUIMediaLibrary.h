/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIImageLoader.h>

@protocol VUIMediaLibraryIdentifier;
@class VUIMediaLibraryManager, NSObject, NSString;

@interface VUIMediaLibrary : VUIImageLoader {

	VUIMediaLibraryManager* _manager;
	NSObject*<VUIMediaLibraryIdentifier> _identifier;
	unsigned long long _type;
	unsigned long long _revision;

}

@property (nonatomic,copy) NSObject*<VUIMediaLibraryIdentifier> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long revision;                                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,__weak,readonly) VUIMediaLibraryManager * manager;                  //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (getter=isConnectable,nonatomic,readonly) BOOL connectable; 
@property (nonatomic,readonly) BOOL supportsDRMContent; 
@property (nonatomic,readonly) unsigned long long connectionState; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSObject*<VUIMediaLibraryIdentifier>)identifier;
-(void)setIdentifier:(NSObject*<VUIMediaLibraryIdentifier>)arg1 ;
-(NSString *)title;
-(VUIMediaLibraryManager *)manager;
-(void)setRevision:(unsigned long long)arg1 ;
-(unsigned long long)connectionState;
-(unsigned long long)revision;
-(BOOL)isConnectable;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(BOOL)supportsDRMContent;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_postContentsDidChangeNotification;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(unsigned long long)_incrementRevision;
-(void)_updateWithTitle:(id)arg1 connectionState:(unsigned long long)arg2 ;
@end

