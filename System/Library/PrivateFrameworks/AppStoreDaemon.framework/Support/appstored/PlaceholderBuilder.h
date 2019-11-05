/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, MIStoreMetadata;

@interface PlaceholderBuilder : NSObject {

	BOOL _hasMessagesExtension;
	BOOL _launchProhibited;
	NSURL* _artworkURL;
	NSString* _bundleID;
	NSString* _bundleName;
	NSString* _bundleVersion;
	NSString* _companionBundleID;
	unsigned long long _installType;
	NSString* _logKey;
	NSURL* _messagesArtworkURL;
	long long _sourceType;
	MIStoreMetadata* _storeMetadata;

}

@property (retain) NSURL * artworkURL;                           //@synthesize artworkURL=_artworkURL - In the implementation block
@property (retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * bundleName;                        //@synthesize bundleName=_bundleName - In the implementation block
@property (retain) NSString * bundleVersion;                     //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSString * companionBundleID;                 //@synthesize companionBundleID=_companionBundleID - In the implementation block
@property (assign) BOOL hasMessagesExtension;                    //@synthesize hasMessagesExtension=_hasMessagesExtension - In the implementation block
@property (assign) unsigned long long installType;               //@synthesize installType=_installType - In the implementation block
@property (assign) BOOL launchProhibited;                        //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (retain) NSString * logKey;                            //@synthesize logKey=_logKey - In the implementation block
@property (retain) NSURL * messagesArtworkURL;                   //@synthesize messagesArtworkURL=_messagesArtworkURL - In the implementation block
@property (assign) long long sourceType;                         //@synthesize sourceType=_sourceType - In the implementation block
@property (retain) MIStoreMetadata * storeMetadata;              //@synthesize storeMetadata=_storeMetadata - In the implementation block
+(id)_artworkPromiseForURL:(id)arg1 logKey:(id)arg2 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned long long)installType;
-(NSString *)bundleVersion;
-(void)setBundleName:(NSString *)arg1 ;
-(NSString *)bundleName;
-(long long)sourceType;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(NSURL *)messagesArtworkURL;
-(BOOL)hasMessagesExtension;
-(BOOL)launchProhibited;
-(void)setMessagesArtworkURL:(NSURL *)arg1 ;
-(void)setHasMessagesExtension:(BOOL)arg1 ;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(NSURL *)artworkURL;
-(MIStoreMetadata *)storeMetadata;
-(void)setStoreMetadata:(MIStoreMetadata *)arg1 ;
-(NSString *)companionBundleID;
-(void)setCompanionBundleID:(NSString *)arg1 ;
-(id)buildPlaceholderWithError:(id*)arg1 ;
-(BOOL)_configurePlaceholder:(id)arg1 withError:(id*)arg2 ;
-(id)buildPlaceholderForSystemAppWithError:(id*)arg1 ;
-(id)buildPlaceholderForStoreAppWithError:(id*)arg1 ;
-(id)_extensionPlaceholderWithParent:(id)arg1 ;
@end
