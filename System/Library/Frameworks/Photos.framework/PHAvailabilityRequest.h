/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, NSManagedObjectID, NSString, NSXPCConnection;

@interface PHAvailabilityRequest : NSObject {

	AB _isCancelled;
	PLPhotoLibrary* _photoLibrary;
	NSManagedObjectID* _assetObjectID;
	NSString* _taskIdentifier;
	unsigned long long _signpostID;
	NSXPCConnection* _clientConnection;

}

@property (nonatomic,readonly) NSManagedObjectID * assetObjectID;              //@synthesize assetObjectID=_assetObjectID - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifier;                          //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long signpostID;                    //@synthesize signpostID=_signpostID - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSXPCConnection * clientConnection;               //@synthesize clientConnection=_clientConnection - In the implementation block
-(id)description;
-(void)cancel;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)isCancelled;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1 ;
-(id)plistDictionary;
-(NSXPCConnection *)clientConnection;
-(void)setClientConnection:(NSXPCConnection *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(void)runDaemonSide;
-(id)initWithPlistDictionary:(id)arg1 photoLibrary:(id)arg2 ;
-(NSManagedObjectID *)assetObjectID;
-(void)abortClientSide;
-(id)initWithAssetObjectID:(id)arg1 ;
@end

