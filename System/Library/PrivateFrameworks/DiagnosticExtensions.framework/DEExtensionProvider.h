/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/NSExtensionRequestHandling.h>

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling> {

	BOOL _canGenerateNewAttachment;
	BOOL _allowUserAttachmentSelection;
	NSString* _loggingConsent;

}

@property (nonatomic,copy) NSString * loggingConsent;                        //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL canGenerateNewAttachment;                  //@synthesize canGenerateNewAttachment=_canGenerateNewAttachment - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(BOOL)isLoggingEnabled;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(BOOL)canEnableLogging;
-(void)enableLogging;
-(void)disableLogging;
-(id)attachmentList;
-(id)attachmentsWithParams:(id)arg1 ;
-(id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3 ;
-(id)_getHostname;
-(BOOL)canGenerateNewAttachment;
-(void)setCanGenerateNewAttachment:(BOOL)arg1 ;
@end
