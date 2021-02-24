package com.trafi.sample

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import com.trafi.ui.component.Button
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing

@Composable
fun ColumnScope.AlertBottomSheet(errorText: String, onClick: () -> Unit) {
    val errorTextParts = errorText.split("\n", limit = 2)
    val errorTitle = errorTextParts[0]
    val errorBody = errorTextParts.getOrNull(1)

    Box(
        Modifier
            .align(Alignment.CenterHorizontally)
            .padding(top = 8.dp)
            .size(32.dp, 5.dp)
            .background(
                color = MaasTheme.colors.grayScale.gray200,
                shape = RoundedCornerShape(percent = 50),
            )
    )

    Column(
        modifier = Modifier
            .padding(
                horizontal = MaasTheme.spacing.globalMargin,
                vertical = Spacing.lg,
            ),
        horizontalAlignment = Alignment.CenterHorizontally,
        verticalArrangement = Arrangement.spacedBy(Spacing.lg)
    ) {
        Text(
            errorTitle,
            color = MaasTheme.colors.onSurface,
            style = MaasTheme.typography.headingL,
        )
        errorBody?.let {
            Text(
                it,
                color = MaasTheme.colors.onSurface,
                style = MaasTheme.typography.textL,
            )
        }
        Button(text = "Got it!", onClick = onClick)
    }
}
