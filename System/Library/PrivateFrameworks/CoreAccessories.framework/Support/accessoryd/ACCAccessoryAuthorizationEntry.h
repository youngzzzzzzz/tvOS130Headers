/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCAccessoryAuthorizationEntry : NSObject {

	BOOL _authorized;
	NSString* _certSerialString;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * certSerialString;              //@synthesize certSerialString=_certSerialString - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL authorized;                          //@synthesize authorized=_authorized - In the implementation block
-(id)description;
-(id)init;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)authorized;
-(NSString *)certSerialString;
-(void)setCertSerialString:(NSString *)arg1 ;
-(void)setAuthorized:(BOOL)arg1 ;
@end

