 (cn->parent != NULL)
        {
            if (cn->parent->value < cn->value)
            {
                Node *tmp = cn;
                cn->value = cn->parent->value;
                cn->parent->value = tmp->value;
            }
        }