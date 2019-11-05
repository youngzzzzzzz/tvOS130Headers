/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/CrashReporterTVApp.app/CrashReporterTVApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CrashReporterTVApp/TSInstruction.h>

@class NSArray, NSString, NSURL;

@interface TSLinkInstruction : TSInstruction {

	BOOL isEmail_;
	BOOL isSupport_;
	NSArray* recipients_;
	NSString* unlocalizedTitle_;
	NSURL* url_;

}

@property (nonatomic,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSString * unlocalizedTitle; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL isEmail; 
@property (nonatomic,readonly) BOOL isSupport; 
-(BOOL)isSupport;
-(void)dealloc;
-(NSURL *)url;
-(NSArray *)recipients;
-(BOOL)isEmail;
-(NSString *)unlocalizedTitle;
-(id)initWithTokens:(id)arg1 ;
@end
