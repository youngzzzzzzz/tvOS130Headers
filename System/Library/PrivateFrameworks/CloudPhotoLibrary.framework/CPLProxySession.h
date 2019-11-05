/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <CloudPhotoLibrary/CPLChangeSessionImplementation.h>

@class NSString;

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)dispatchBlockWhenLibraryIsOpen:(/*^block*/id)arg1 ;
-(id)proxyLibraryManager;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownWithCompletionHandler:(/*^block*/id)arg1 ;
@end
