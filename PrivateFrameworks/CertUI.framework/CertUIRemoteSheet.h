/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CertUIRemoteSheet : NSObject {
    id _responseBlock;
}

- (id)_copyPropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_expirationFromTrust:(struct __SecTrust { }*)arg1;
- (void)_informConsumerOfResponse:(NSInteger)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoForDisplayName:(id)arg1 trust:(struct __SecTrust { }*)arg2;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)_purposeFromTrustProperties:(id)arg1;
- (NSInteger)_responseFromReplyDict:(id)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust { }*)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (id)_subtitleFromTrust:(struct __SecTrust { }*)arg1;
- (id)_titleFromTrust:(struct __SecTrust { }*)arg1;
- (void)messagingCenter:(id)arg1 receivedReply:(id)arg2 error:(id)arg3 context:(void*)arg4;
- (BOOL)presentWithConnectionDisplayName:(id)arg1 trust:(struct __SecTrust { }*)arg2 responseBlock:(id)arg3;
- (NSInteger)waitForResponseForDisplayName:(id)arg1 trust:(struct __SecTrust { }*)arg2;

@end