/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <appstored/NSCopying.h>

@class NSString;

@interface TFApplication : PBCodable <NSCopying> {

	unsigned long long _applicationAdamId;
	unsigned long long _uptimeMillis;
	NSString* _bundleId;
	NSString* _cfBundleShortVersionString;
	NSString* _cfBundleVersion;
	SCD_Struct_TF8 _has;

}

@property (assign,nonatomic) BOOL hasApplicationAdamId; 
@property (assign,nonatomic) unsigned long long applicationAdamId;               //@synthesize applicationAdamId=_applicationAdamId - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasCfBundleShortVersionString; 
@property (nonatomic,retain) NSString * cfBundleShortVersionString;              //@synthesize cfBundleShortVersionString=_cfBundleShortVersionString - In the implementation block
@property (nonatomic,readonly) BOOL hasCfBundleVersion; 
@property (nonatomic,retain) NSString * cfBundleVersion;                         //@synthesize cfBundleVersion=_cfBundleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasUptimeMillis; 
@property (assign,nonatomic) unsigned long long uptimeMillis;                    //@synthesize uptimeMillis=_uptimeMillis - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setBundleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleId;
-(void)setApplicationAdamId:(unsigned long long)arg1 ;
-(void)setCfBundleVersion:(NSString *)arg1 ;
-(void)setCfBundleShortVersionString:(NSString *)arg1 ;
-(void)setUptimeMillis:(unsigned long long)arg1 ;
-(void)setHasApplicationAdamId:(BOOL)arg1 ;
-(BOOL)hasApplicationAdamId;
-(BOOL)hasCfBundleShortVersionString;
-(BOOL)hasCfBundleVersion;
-(void)setHasUptimeMillis:(BOOL)arg1 ;
-(BOOL)hasUptimeMillis;
-(unsigned long long)applicationAdamId;
-(NSString *)cfBundleShortVersionString;
-(NSString *)cfBundleVersion;
-(unsigned long long)uptimeMillis;
@end
