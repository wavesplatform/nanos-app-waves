/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.2-dev */

#ifndef PB_WAVES_TRANSACTION_PB_H_INCLUDED
#define PB_WAVES_TRANSACTION_PB_H_INCLUDED
#include <pb.h>
#include "amount.pb.h"
#include "recipient.pb.h"
#include "order.pb.h"

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _waves_CreateAliasTransactionData {
    pb_callback_t alias;
} waves_CreateAliasTransactionData;

typedef struct _waves_DataTransactionData {
    char dummy_field;
} waves_DataTransactionData;

typedef struct _waves_ExchangeTransactionData {
    char dummy_field;
} waves_ExchangeTransactionData;

typedef struct _waves_GenesisTransactionData {
    char dummy_field;
} waves_GenesisTransactionData;

typedef struct _waves_LeaseCancelTransactionData {
    pb_callback_t lease_id;
} waves_LeaseCancelTransactionData;

typedef struct _waves_MassTransferTransactionData {
    pb_callback_t asset_id;
    pb_callback_t attachment;
} waves_MassTransferTransactionData;

typedef struct _waves_PaymentTransactionData {
    char dummy_field;
} waves_PaymentTransactionData;

typedef struct _waves_SetAssetScriptTransactionData {
    pb_callback_t asset_id;
} waves_SetAssetScriptTransactionData;

typedef struct _waves_SetScriptTransactionData {
    char dummy_field;
} waves_SetScriptTransactionData;

typedef struct _waves_UpdateAssetInfoTransactionData {
    pb_callback_t asset_id;
    pb_callback_t name;
    pb_callback_t description;
} waves_UpdateAssetInfoTransactionData;

typedef struct _waves_BurnTransactionData {
    bool has_asset_amount;
    waves_Amount asset_amount;
} waves_BurnTransactionData;

typedef struct _waves_InvokeScriptTransactionData {
    bool has_d_app;
    waves_Recipient d_app;
    pb_callback_t function_call;
    pb_size_t payments_count;
    waves_Amount payments[2];
} waves_InvokeScriptTransactionData;

typedef struct _waves_IssueTransactionData {
    pb_callback_t name;
    pb_callback_t description;
    int64_t amount;
    int32_t decimals;
    bool reissuable;
} waves_IssueTransactionData;

typedef struct _waves_LeaseTransactionData {
    bool has_recipient;
    waves_Recipient recipient;
    int64_t amount;
} waves_LeaseTransactionData;

typedef struct _waves_ReissueTransactionData {
    bool has_asset_amount;
    waves_Amount asset_amount;
    bool reissuable;
} waves_ReissueTransactionData;

typedef struct _waves_SponsorFeeTransactionData {
    bool has_min_fee;
    waves_Amount min_fee;
} waves_SponsorFeeTransactionData;

typedef struct _waves_TransferTransactionData {
    bool has_recipient;
    waves_Recipient recipient;
    bool has_amount;
    waves_Amount amount;
    pb_callback_t attachment;
} waves_TransferTransactionData;

typedef struct _waves_Transaction {
    pb_callback_t sender_public_key;
    pb_callback_t cb_fee;
    bool has_fee;
    waves_Amount fee;
    pb_callback_t cb_data;
    pb_size_t which_data;
    union {
        waves_GenesisTransactionData genesis;
        waves_PaymentTransactionData payment;
        waves_IssueTransactionData issue;
        waves_TransferTransactionData transfer;
        waves_ReissueTransactionData reissue;
        waves_BurnTransactionData burn;
        waves_ExchangeTransactionData exchange;
        waves_LeaseTransactionData lease;
        waves_LeaseCancelTransactionData lease_cancel;
        waves_CreateAliasTransactionData create_alias;
        waves_MassTransferTransactionData mass_transfer;
        waves_DataTransactionData data_transaction;
        waves_SetScriptTransactionData set_script;
        waves_SponsorFeeTransactionData sponsor_fee;
        waves_SetAssetScriptTransactionData set_asset_script;
        waves_InvokeScriptTransactionData invoke_script;
        waves_UpdateAssetInfoTransactionData update_asset_info;
    } data;
} waves_Transaction;

typedef struct _waves_SignedTransaction {
    bool has_transaction;
    waves_Transaction transaction;
    pb_callback_t proofs;
} waves_SignedTransaction;


/* Initializer values for message structs */
#define waves_SignedTransaction_init_default     {false, waves_Transaction_init_default, {{NULL}, NULL}}
#define waves_Transaction_init_default           {{{NULL}, NULL}, {{NULL}, NULL}, false, waves_Amount_init_default, {{NULL}, NULL}, 0, {waves_GenesisTransactionData_init_default}}
#define waves_GenesisTransactionData_init_default {0}
#define waves_PaymentTransactionData_init_default {0}
#define waves_TransferTransactionData_init_default {false, waves_Recipient_init_default, false, waves_Amount_init_default, {{NULL}, NULL}}
#define waves_CreateAliasTransactionData_init_default {{{NULL}, NULL}}
#define waves_DataTransactionData_init_default   {0}
#define waves_MassTransferTransactionData_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define waves_LeaseTransactionData_init_default  {false, waves_Recipient_init_default, 0}
#define waves_LeaseCancelTransactionData_init_default {{{NULL}, NULL}}
#define waves_BurnTransactionData_init_default   {false, waves_Amount_init_default}
#define waves_IssueTransactionData_init_default  {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0}
#define waves_ReissueTransactionData_init_default {false, waves_Amount_init_default, 0}
#define waves_SetAssetScriptTransactionData_init_default {{{NULL}, NULL}}
#define waves_SetScriptTransactionData_init_default {0}
#define waves_ExchangeTransactionData_init_default {0}
#define waves_SponsorFeeTransactionData_init_default {false, waves_Amount_init_default}
#define waves_InvokeScriptTransactionData_init_default {false, waves_Recipient_init_default, {{NULL}, NULL}, 0, {waves_Amount_init_default, waves_Amount_init_default}}
#define waves_UpdateAssetInfoTransactionData_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define waves_SignedTransaction_init_zero        {false, waves_Transaction_init_zero, {{NULL}, NULL}}
#define waves_Transaction_init_zero              {{{NULL}, NULL}, {{NULL}, NULL}, false, waves_Amount_init_zero, {{NULL}, NULL}, 0, {waves_GenesisTransactionData_init_zero}}
#define waves_GenesisTransactionData_init_zero   {0}
#define waves_PaymentTransactionData_init_zero   {0}
#define waves_TransferTransactionData_init_zero  {false, waves_Recipient_init_zero, false, waves_Amount_init_zero, {{NULL}, NULL}}
#define waves_CreateAliasTransactionData_init_zero {{{NULL}, NULL}}
#define waves_DataTransactionData_init_zero      {0}
#define waves_MassTransferTransactionData_init_zero {{{NULL}, NULL}, {{NULL}, NULL}}
#define waves_LeaseTransactionData_init_zero     {false, waves_Recipient_init_zero, 0}
#define waves_LeaseCancelTransactionData_init_zero {{{NULL}, NULL}}
#define waves_BurnTransactionData_init_zero      {false, waves_Amount_init_zero}
#define waves_IssueTransactionData_init_zero     {{{NULL}, NULL}, {{NULL}, NULL}, 0, 0, 0}
#define waves_ReissueTransactionData_init_zero   {false, waves_Amount_init_zero, 0}
#define waves_SetAssetScriptTransactionData_init_zero {{{NULL}, NULL}}
#define waves_SetScriptTransactionData_init_zero {0}
#define waves_ExchangeTransactionData_init_zero  {0}
#define waves_SponsorFeeTransactionData_init_zero {false, waves_Amount_init_zero}
#define waves_InvokeScriptTransactionData_init_zero {false, waves_Recipient_init_zero, {{NULL}, NULL}, 0, {waves_Amount_init_zero, waves_Amount_init_zero}}
#define waves_UpdateAssetInfoTransactionData_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define waves_CreateAliasTransactionData_alias_tag 1
#define waves_LeaseCancelTransactionData_lease_id_tag 1
#define waves_MassTransferTransactionData_asset_id_tag 1
#define waves_MassTransferTransactionData_attachment_tag 3
#define waves_SetAssetScriptTransactionData_asset_id_tag 1
#define waves_UpdateAssetInfoTransactionData_asset_id_tag 1
#define waves_UpdateAssetInfoTransactionData_name_tag 2
#define waves_UpdateAssetInfoTransactionData_description_tag 3
#define waves_BurnTransactionData_asset_amount_tag 1
#define waves_InvokeScriptTransactionData_d_app_tag 1
#define waves_InvokeScriptTransactionData_function_call_tag 2
#define waves_InvokeScriptTransactionData_payments_tag 3
#define waves_IssueTransactionData_name_tag      1
#define waves_IssueTransactionData_description_tag 2
#define waves_IssueTransactionData_amount_tag    3
#define waves_IssueTransactionData_decimals_tag  4
#define waves_IssueTransactionData_reissuable_tag 5
#define waves_LeaseTransactionData_recipient_tag 1
#define waves_LeaseTransactionData_amount_tag    2
#define waves_ReissueTransactionData_asset_amount_tag 1
#define waves_ReissueTransactionData_reissuable_tag 2
#define waves_SponsorFeeTransactionData_min_fee_tag 1
#define waves_TransferTransactionData_recipient_tag 1
#define waves_TransferTransactionData_amount_tag 2
#define waves_TransferTransactionData_attachment_tag 3
#define waves_Transaction_genesis_tag            101
#define waves_Transaction_payment_tag            102
#define waves_Transaction_issue_tag              103
#define waves_Transaction_transfer_tag           104
#define waves_Transaction_reissue_tag            105
#define waves_Transaction_burn_tag               106
#define waves_Transaction_exchange_tag           107
#define waves_Transaction_lease_tag              108
#define waves_Transaction_lease_cancel_tag       109
#define waves_Transaction_create_alias_tag       110
#define waves_Transaction_mass_transfer_tag      111
#define waves_Transaction_data_transaction_tag   112
#define waves_Transaction_set_script_tag         113
#define waves_Transaction_sponsor_fee_tag        114
#define waves_Transaction_set_asset_script_tag   115
#define waves_Transaction_invoke_script_tag      116
#define waves_Transaction_update_asset_info_tag  117
#define waves_Transaction_sender_public_key_tag  2
#define waves_Transaction_fee_tag                3
#define waves_SignedTransaction_transaction_tag  1
#define waves_SignedTransaction_proofs_tag       2

/* Struct field encoding specification for nanopb */
#define waves_SignedTransaction_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  transaction,       1) \
X(a, CALLBACK, REPEATED, BYTES,    proofs,            2)
#define waves_SignedTransaction_CALLBACK pb_default_field_callback
#define waves_SignedTransaction_DEFAULT NULL
#define waves_SignedTransaction_transaction_MSGTYPE waves_Transaction

#define waves_Transaction_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    sender_public_key,   2) \
X(a, STATIC,   OPTIONAL, MSG_W_CB, fee,               3) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,genesis,data.genesis), 101) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,payment,data.payment), 102) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,issue,data.issue), 103) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,transfer,data.transfer), 104) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,reissue,data.reissue), 105) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,burn,data.burn), 106) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,exchange,data.exchange), 107) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,lease,data.lease), 108) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,lease_cancel,data.lease_cancel), 109) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,create_alias,data.create_alias), 110) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,mass_transfer,data.mass_transfer), 111) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,data_transaction,data.data_transaction), 112) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,set_script,data.set_script), 113) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,sponsor_fee,data.sponsor_fee), 114) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,set_asset_script,data.set_asset_script), 115) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,invoke_script,data.invoke_script), 116) \
X(a, STATIC,   ONEOF,    MSG_W_CB, (data,update_asset_info,data.update_asset_info), 117)
#define waves_Transaction_CALLBACK pb_default_field_callback
#define waves_Transaction_DEFAULT NULL
#define waves_Transaction_fee_MSGTYPE waves_Amount
#define waves_Transaction_data_genesis_MSGTYPE waves_GenesisTransactionData
#define waves_Transaction_data_payment_MSGTYPE waves_PaymentTransactionData
#define waves_Transaction_data_issue_MSGTYPE waves_IssueTransactionData
#define waves_Transaction_data_transfer_MSGTYPE waves_TransferTransactionData
#define waves_Transaction_data_reissue_MSGTYPE waves_ReissueTransactionData
#define waves_Transaction_data_burn_MSGTYPE waves_BurnTransactionData
#define waves_Transaction_data_exchange_MSGTYPE waves_ExchangeTransactionData
#define waves_Transaction_data_lease_MSGTYPE waves_LeaseTransactionData
#define waves_Transaction_data_lease_cancel_MSGTYPE waves_LeaseCancelTransactionData
#define waves_Transaction_data_create_alias_MSGTYPE waves_CreateAliasTransactionData
#define waves_Transaction_data_mass_transfer_MSGTYPE waves_MassTransferTransactionData
#define waves_Transaction_data_data_transaction_MSGTYPE waves_DataTransactionData
#define waves_Transaction_data_set_script_MSGTYPE waves_SetScriptTransactionData
#define waves_Transaction_data_sponsor_fee_MSGTYPE waves_SponsorFeeTransactionData
#define waves_Transaction_data_set_asset_script_MSGTYPE waves_SetAssetScriptTransactionData
#define waves_Transaction_data_invoke_script_MSGTYPE waves_InvokeScriptTransactionData
#define waves_Transaction_data_update_asset_info_MSGTYPE waves_UpdateAssetInfoTransactionData

#define waves_GenesisTransactionData_FIELDLIST(X, a) \

#define waves_GenesisTransactionData_CALLBACK NULL
#define waves_GenesisTransactionData_DEFAULT NULL

#define waves_PaymentTransactionData_FIELDLIST(X, a) \

#define waves_PaymentTransactionData_CALLBACK NULL
#define waves_PaymentTransactionData_DEFAULT NULL

#define waves_TransferTransactionData_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  recipient,         1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  amount,            2) \
X(a, CALLBACK, SINGULAR, BYTES,    attachment,        3)
#define waves_TransferTransactionData_CALLBACK pb_default_field_callback
#define waves_TransferTransactionData_DEFAULT NULL
#define waves_TransferTransactionData_recipient_MSGTYPE waves_Recipient
#define waves_TransferTransactionData_amount_MSGTYPE waves_Amount

#define waves_CreateAliasTransactionData_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   alias,             1)
#define waves_CreateAliasTransactionData_CALLBACK pb_default_field_callback
#define waves_CreateAliasTransactionData_DEFAULT NULL

#define waves_DataTransactionData_FIELDLIST(X, a) \

#define waves_DataTransactionData_CALLBACK NULL
#define waves_DataTransactionData_DEFAULT NULL

#define waves_MassTransferTransactionData_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    asset_id,          1) \
X(a, CALLBACK, SINGULAR, BYTES,    attachment,        3)
#define waves_MassTransferTransactionData_CALLBACK pb_default_field_callback
#define waves_MassTransferTransactionData_DEFAULT NULL

#define waves_LeaseTransactionData_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  recipient,         1) \
X(a, STATIC,   SINGULAR, INT64,    amount,            2)
#define waves_LeaseTransactionData_CALLBACK NULL
#define waves_LeaseTransactionData_DEFAULT NULL
#define waves_LeaseTransactionData_recipient_MSGTYPE waves_Recipient

#define waves_LeaseCancelTransactionData_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    lease_id,          1)
#define waves_LeaseCancelTransactionData_CALLBACK pb_default_field_callback
#define waves_LeaseCancelTransactionData_DEFAULT NULL

#define waves_BurnTransactionData_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  asset_amount,      1)
#define waves_BurnTransactionData_CALLBACK NULL
#define waves_BurnTransactionData_DEFAULT NULL
#define waves_BurnTransactionData_asset_amount_MSGTYPE waves_Amount

#define waves_IssueTransactionData_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   description,       2) \
X(a, STATIC,   SINGULAR, INT64,    amount,            3) \
X(a, STATIC,   SINGULAR, INT32,    decimals,          4) \
X(a, STATIC,   SINGULAR, BOOL,     reissuable,        5)
#define waves_IssueTransactionData_CALLBACK pb_default_field_callback
#define waves_IssueTransactionData_DEFAULT NULL

#define waves_ReissueTransactionData_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  asset_amount,      1) \
X(a, STATIC,   SINGULAR, BOOL,     reissuable,        2)
#define waves_ReissueTransactionData_CALLBACK NULL
#define waves_ReissueTransactionData_DEFAULT NULL
#define waves_ReissueTransactionData_asset_amount_MSGTYPE waves_Amount

#define waves_SetAssetScriptTransactionData_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    asset_id,          1)
#define waves_SetAssetScriptTransactionData_CALLBACK pb_default_field_callback
#define waves_SetAssetScriptTransactionData_DEFAULT NULL

#define waves_SetScriptTransactionData_FIELDLIST(X, a) \

#define waves_SetScriptTransactionData_CALLBACK NULL
#define waves_SetScriptTransactionData_DEFAULT NULL

#define waves_ExchangeTransactionData_FIELDLIST(X, a) \

#define waves_ExchangeTransactionData_CALLBACK NULL
#define waves_ExchangeTransactionData_DEFAULT NULL

#define waves_SponsorFeeTransactionData_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  min_fee,           1)
#define waves_SponsorFeeTransactionData_CALLBACK NULL
#define waves_SponsorFeeTransactionData_DEFAULT NULL
#define waves_SponsorFeeTransactionData_min_fee_MSGTYPE waves_Amount

#define waves_InvokeScriptTransactionData_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  d_app,             1) \
X(a, CALLBACK, SINGULAR, BYTES,    function_call,     2) \
X(a, STATIC,   REPEATED, MESSAGE,  payments,          3)
#define waves_InvokeScriptTransactionData_CALLBACK pb_default_field_callback
#define waves_InvokeScriptTransactionData_DEFAULT NULL
#define waves_InvokeScriptTransactionData_d_app_MSGTYPE waves_Recipient
#define waves_InvokeScriptTransactionData_payments_MSGTYPE waves_Amount

#define waves_UpdateAssetInfoTransactionData_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    asset_id,          1) \
X(a, CALLBACK, SINGULAR, STRING,   name,              2) \
X(a, CALLBACK, SINGULAR, STRING,   description,       3)
#define waves_UpdateAssetInfoTransactionData_CALLBACK pb_default_field_callback
#define waves_UpdateAssetInfoTransactionData_DEFAULT NULL

extern const pb_msgdesc_t waves_SignedTransaction_msg;
extern const pb_msgdesc_t waves_Transaction_msg;
extern const pb_msgdesc_t waves_GenesisTransactionData_msg;
extern const pb_msgdesc_t waves_PaymentTransactionData_msg;
extern const pb_msgdesc_t waves_TransferTransactionData_msg;
extern const pb_msgdesc_t waves_CreateAliasTransactionData_msg;
extern const pb_msgdesc_t waves_DataTransactionData_msg;
extern const pb_msgdesc_t waves_MassTransferTransactionData_msg;
extern const pb_msgdesc_t waves_LeaseTransactionData_msg;
extern const pb_msgdesc_t waves_LeaseCancelTransactionData_msg;
extern const pb_msgdesc_t waves_BurnTransactionData_msg;
extern const pb_msgdesc_t waves_IssueTransactionData_msg;
extern const pb_msgdesc_t waves_ReissueTransactionData_msg;
extern const pb_msgdesc_t waves_SetAssetScriptTransactionData_msg;
extern const pb_msgdesc_t waves_SetScriptTransactionData_msg;
extern const pb_msgdesc_t waves_ExchangeTransactionData_msg;
extern const pb_msgdesc_t waves_SponsorFeeTransactionData_msg;
extern const pb_msgdesc_t waves_InvokeScriptTransactionData_msg;
extern const pb_msgdesc_t waves_UpdateAssetInfoTransactionData_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define waves_SignedTransaction_fields &waves_SignedTransaction_msg
#define waves_Transaction_fields &waves_Transaction_msg
#define waves_GenesisTransactionData_fields &waves_GenesisTransactionData_msg
#define waves_PaymentTransactionData_fields &waves_PaymentTransactionData_msg
#define waves_TransferTransactionData_fields &waves_TransferTransactionData_msg
#define waves_CreateAliasTransactionData_fields &waves_CreateAliasTransactionData_msg
#define waves_DataTransactionData_fields &waves_DataTransactionData_msg
#define waves_MassTransferTransactionData_fields &waves_MassTransferTransactionData_msg
#define waves_LeaseTransactionData_fields &waves_LeaseTransactionData_msg
#define waves_LeaseCancelTransactionData_fields &waves_LeaseCancelTransactionData_msg
#define waves_BurnTransactionData_fields &waves_BurnTransactionData_msg
#define waves_IssueTransactionData_fields &waves_IssueTransactionData_msg
#define waves_ReissueTransactionData_fields &waves_ReissueTransactionData_msg
#define waves_SetAssetScriptTransactionData_fields &waves_SetAssetScriptTransactionData_msg
#define waves_SetScriptTransactionData_fields &waves_SetScriptTransactionData_msg
#define waves_ExchangeTransactionData_fields &waves_ExchangeTransactionData_msg
#define waves_SponsorFeeTransactionData_fields &waves_SponsorFeeTransactionData_msg
#define waves_InvokeScriptTransactionData_fields &waves_InvokeScriptTransactionData_msg
#define waves_UpdateAssetInfoTransactionData_fields &waves_UpdateAssetInfoTransactionData_msg

/* Maximum encoded size of messages (where known) */
/* waves_SignedTransaction_size depends on runtime parameters */
/* waves_Transaction_size depends on runtime parameters */
#define waves_GenesisTransactionData_size        0
#define waves_PaymentTransactionData_size        0
/* waves_TransferTransactionData_size depends on runtime parameters */
/* waves_CreateAliasTransactionData_size depends on runtime parameters */
#define waves_DataTransactionData_size           0
/* waves_MassTransferTransactionData_size depends on runtime parameters */
#define waves_LeaseTransactionData_size          45
/* waves_LeaseCancelTransactionData_size depends on runtime parameters */
#define waves_BurnTransactionData_size           (6 + waves_Amount_size)
/* waves_IssueTransactionData_size depends on runtime parameters */
#define waves_ReissueTransactionData_size        (8 + waves_Amount_size)
/* waves_SetAssetScriptTransactionData_size depends on runtime parameters */
#define waves_SetScriptTransactionData_size      0
#define waves_ExchangeTransactionData_size       0
#define waves_SponsorFeeTransactionData_size     (6 + waves_Amount_size)
/* waves_InvokeScriptTransactionData_size depends on runtime parameters */
/* waves_UpdateAssetInfoTransactionData_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
