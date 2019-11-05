/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryDeleteEntityChangeRequest;

@interface MPModelLibraryDeleteEntityChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelLibraryDeleteEntityChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryDeleteEntityChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelLibraryDeleteEntityChangeRequest *)request;
-(void)setRequest:(MPModelLibraryDeleteEntityChangeRequest *)arg1 ;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)_handlePersistentID:(long long)arg1 modelClass:(Class)arg2 mediaLibrary:(id)arg3 ;
-(void)_deleteItems:(id)arg1 withLibrary:(id)arg2 ;
-(BOOL)_isCloudLibraryEnabled;
@end
