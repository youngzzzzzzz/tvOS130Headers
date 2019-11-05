/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVSettings/TVSettings-Structs.h>
@class NSString;

@interface TVSettingsCertificateTrustItem : NSObject {

	BOOL _restricted;
	NSString* _displayName;
	SecCertificateRef _cert;

}

@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) SecCertificateRef cert;                           //@synthesize cert=_cert - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
@property (assign,getter=isTrusted,nonatomic) BOOL trusted; 
-(NSString *)displayName;
-(BOOL)isRestricted;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)isTrusted;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setTrusted:(BOOL)arg1 ;
-(SecCertificateRef)cert;
-(void)setCert:(SecCertificateRef)arg1 ;
@end
