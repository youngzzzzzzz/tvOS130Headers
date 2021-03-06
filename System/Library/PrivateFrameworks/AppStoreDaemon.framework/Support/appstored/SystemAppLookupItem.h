/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSError, NSArray, NSURL;

@interface SystemAppLookupItem : NSObject {

	BOOL _streamableZip;
	NSString* _bundleID;
	NSNumber* _downloadOffset;
	NSNumber* _downloadSize;
	NSError* _error;
	NSNumber* _hashType;
	NSArray* _hashes;
	NSString* _title;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSNumber * downloadOffset;                              //@synthesize downloadOffset=_downloadOffset - In the implementation block
@property (nonatomic,readonly) NSNumber * downloadSize;                                //@synthesize downloadSize=_downloadSize - In the implementation block
@property (nonatomic,readonly) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * hashType;                                    //@synthesize hashType=_hashType - In the implementation block
@property (nonatomic,readonly) NSArray * hashes;                                       //@synthesize hashes=_hashes - In the implementation block
@property (getter=isStreamableZip,nonatomic,readonly) BOOL streamableZip;              //@synthesize streamableZip=_streamableZip - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
+(id)_hashArrayFromMeasurement:(id)arg1 ;
+(id)_stringFromDigest:(char*)arg1 ;
-(NSError *)error;
-(NSURL *)URL;
-(NSString *)bundleID;
-(NSString *)title;
-(NSNumber *)hashType;
-(NSArray *)hashes;
-(NSNumber *)downloadSize;
-(BOOL)isStreamableZip;
-(id)initWithURL:(id)arg1 attributes:(id)arg2 ;
-(NSNumber *)downloadOffset;
@end

